for _ in range(int(input())):
    i1 = input().split()
    P, a, b, c, x, y = int(i1[0]), int(i1[1]), int(i1[2]), int(i1[3]), int(i1[4]), int(i1[5])
    total_spent = 0
    anar = 0
    rocket = 0
    while total_spent <= P:
        cost_of_one_anar_with_fuljharis = b + x * a
        cost_of_one_rocket_with_fuljharis = c + y * a
        if cost_of_one_anar_with_fuljharis < cost_of_one_rocket_with_fuljharis and cost_of_one_anar_with_fuljharis <= P - total_spent:
            total_spent += cost_of_one_anar_with_fuljharis
            anar += 1
        elif cost_of_one_rocket_with_fuljharis <= P - total_spent:
            total_spent += cost_of_one_rocket_with_fuljharis
            rocket += 1
        else:
            break
        
    print(anar + rocket)
