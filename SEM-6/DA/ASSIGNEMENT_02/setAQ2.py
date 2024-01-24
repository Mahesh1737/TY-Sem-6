import pandas as pd
from mlxtend.frequent_patterns import apriori, association_rules

transaction=[['bat','ball','stump','empire'],['ball','bell','stump','ball'],['bell','ball','empire','pitch','run'],['empire','pitch','ball','bat','stadium'],['stadium','pitch','run','out','notout'],['run','out','bat','ball','pitch','empire','bell']]

from mlxtend.preprocessing import TransactionEncoder
te = TransactionEncoder()
te_array = te.fit(transaction).transform(transaction)
df = pd.DataFrame(te_array, columns=te.columns_)
print(df)

freq_items = apriori(df, min_support = 0.5, use_colnames=True)
print(freq_items)

rules = association_rules(freq_items, metric = 'support', min_threshold= 0.05)
rules = rules.sort_values(['support','confidence'], ascending = [False,False])
print(rules)u
