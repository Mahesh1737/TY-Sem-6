import nltk
from nltk.sentiment.vader import SentimentIntensityAnalyzer
import pandas as pd
nltk.download('vader_lexicon')
import matplotlib.pyplot as plt
from wordcloud import WordCloud
from nltk.corpus import stopwords
from nltk.tokenize import word_tokenize,sent_tokenize

# Read the dataset
df = pd.read_csv('IN.csv')
print(df)
print(df.isnull().sum())

print("\nTotal vies Total likes Total dislikes and total comment count")
print(df[['views','likes','dislikes','comment_count']].sum())

print("\nleast like video\n")
print(df.sort_values(by='likes',ascending=True).tail(5))

print("\nTop like video\n")
print(df.sort_values(by='likes',ascending=True).head(5))

print("\nleast comment video\n")
print(df.sort_values(by='video_id',ascending=True).tail(5))

print("\nTop comment video\n")
print(df.sort_values(by='video_id',ascending=True).head(5))

import datetime 
year=[]

for i in range(df.shape[0]):
     date_time_obj=datetime.datetime.strptime(df['publish_time'].at[i],'%Y-%m-%dT%H:%M:%S.000Z')
     df['publish_time'].at[i] = date_time_obj
     i=i+1

for i in range(df.shape[0]):
        y=df['publish_time'][i].date().year
        year.append(y)
        i=i+1     
     
     
     
df['year']=year

plt.scatter(df['year'],df['views'], color="magenta")
plt.xlabel("Year")
plt.ylabel("Views")
plt.show()
