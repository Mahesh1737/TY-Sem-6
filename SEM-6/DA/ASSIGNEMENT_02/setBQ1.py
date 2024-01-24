import pandas as pd
from mlxtend.frequent_patterns import apriori, association_rules
df=pd.read_csv('Market_Basket_Optimisation.csv')
t=[]
print(df)
df=df.sample(100)
for i in range(0, len(df)):
    t.append([str(df.values[i,j]) for j in range(0,20) if str(df.values[i,j])!='nan'])
print(t)


from mlxtend.preprocessing import TransactionEncoder
te=TransactionEncoder()
te_array=te.fit(t).transform(t)
df=pd.DataFrame(te_array, columns=te.columns_)
print(df)

freq_items=apriori(df, min_support = 0.005, use_colnames=True)
print(freq_items)

rules=association_rules(freq_items, metric = 'support', min_threshold= 0.005)
rules=rules.sort_values(['support','confidence'], ascending = [False,False])
print(rules)
