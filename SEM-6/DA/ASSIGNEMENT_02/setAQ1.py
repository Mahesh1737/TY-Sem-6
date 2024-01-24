import pandas as pd
from mlxtend.frequent_patterns import apriori, association_rules

transaction=[['Bread','Milk'],['Bread','Diaper','Beer','Eggs'],['Milk','Diaper','Beer','Coke'],['Bread','Milk','Diaper','Beer'],['Bread','Milk','Diaper','Coke']]

from mlxtend.preprocessing import TransactionEncoder
te = TransactionEncoder()
te_array = te.fit(transaction).transform(transaction)
df = pd.DataFrame(te_array, columns=te.columns_)
print(df)

freq_items = apriori(df, min_support = 0.5, use_colnames=True)
print(freq_items)

rules = association_rules(freq_items, metric = 'support', min_threshold= 0.05)
rules = rules.sort_values(['support','confidence'], ascending = [False,False])
print(rules)
