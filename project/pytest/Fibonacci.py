import random
import torch
def data_batch(batch_size, features):
    num_examples = len(features)
    index = list(range(num_examples))
    random.shuffle(index)
    features_list = []
    for example in index:
        features_list.append(features[example])
        if len(features_list) == batch_size:
            yield torch.tensor(features_list)
            features_list = []
    if len(features_list) >0:
        yield torch.tensor(features_list)
a = list(range(10))
ger = data_batch(6,a)
for i in range(3):
    print(ger.__next__())