# How Heavy?
## Background
The real-estate market is very volatile and efforts are made by all to predict the correct price of a property based on several factors. However, not every prediction is trusted. 
Mr. A. Negi is a famous real estate magnate and has developed a software that is trusted by all buyers. He claims to predict real-estate prices using ONLY 5 parameters. The parameters are a public knowledge but the parameters of Negi's model are a secret.
Your task if you choose accept it, is to give us those parameters (precision 6 decimal places) encoded as a flag. 

## Submission Guidlines
Given below is the link to Mr. Negi's predictor. Create a GET request asking it the relevant questions.
If your parameters (correct upto 6 decimal places) are p1 and p2. Then create the flag in the following manner.
`params = hex(p1||p2) where '||' means concatenation.`
Submit the following:
`flag{params}`

Negi Predictor: 
