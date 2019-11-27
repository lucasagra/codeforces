import math

persons, teams = map(int, input().split())



def comb(size_team):
    if size_team < 2:
        return 0
    else:
        return ((size_team)*(size_team-1))//2


# minimum -> teams with the same amount of people

persons_remaining = persons - teams
add_people_per_team = persons_remaining//teams
remaining = persons_remaining%teams
minimum = (teams-remaining)*comb(1+add_people_per_team)
minimum += remaining*comb(2+add_people_per_team)

# maximum -> teams with 1 person and 1 team with the remaining

people_last_team = persons - (teams-1)
maximum = comb(people_last_team)

print(int(minimum), int(maximum))

