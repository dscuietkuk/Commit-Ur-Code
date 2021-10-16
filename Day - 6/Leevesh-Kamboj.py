for _ in range(int(input())):
    i1 = input().split()
    P, a, b, c, x, y = int(i1[0]), int(i1[1]), int(i1[2]), int(i1[3]), int(i1[4]), int(i1[5])
    anar = 0
    rocket = 0
    cost_of_one_anar_with_fuljharis = b + x * a
    cost_of_one_rocket_with_fuljharis = c + y * a
    if cost_of_one_anar_with_fuljharis < cost_of_one_rocket_with_fuljharis:
        anar += P // cost_of_one_anar_with_fuljharis
    else:
        rocket += P // cost_of_one_rocket_with_fuljharis
    
    print(anar + rocket)
