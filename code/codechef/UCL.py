for _ in range(int(input())):
    
    dif = dict()
    points = dict()

    for _ in range(12):

        ip = input().strip().split()
        home_name, away_name = ip[0], ip[4]
        home_score, away_score = int(ip[1]), int(ip[3])

        if not away_name in dif.keys():
            dif[away_name] = 0
            points[away_name] = 0

        if not home_name in dif.keys():
            dif[home_name] = 0
            points[home_name] = 0

        if home_score > away_score :
            dif[home_name] += (home_score - away_score)
            dif[away_name] += (away_score - home_score)
            points[home_name] += 3

        elif away_score > home_score :
            dif[home_name] += (home_score - away_score)
            dif[away_name] += (away_score - home_score)
            points[away_name] += 3

        else :
            points[away_name] += 1
            points[home_name] += 1

    res = sorted(points, key = lambda x : (points[x],dif[x]), reverse = True)

    print(res[0],res[1])
