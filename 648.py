def replaceword(dictio, sen):
    for elem in dictio:
        for word in sen:
            if elem in word:
                elem , word = word, elem
    return sen;

dictio = ["cat","bat","rat"]
sen = "the cattle was rattle by the battery"
print(replaceword(dictio,sen))
