#lang

# lang = 'abcdefg'

#print(lang[0])

# print(lang[:3])


#문자열 처리

# snack = '삼결살'
# two  =  '2인분'

# juseyo = snack + two

# juseyo += '달라고'


# print(juseyo)


#몇글자인지 구하기 

# snack = '''안녕하세요
# 저는동아대학교컴퓨터공학과 2학년
# 23학번정현오라고합니다'''

# print(len(snack))       

#문자열 메소드?

# letter = 'HoW ArE YoU'

# print(letter.lower())

# print (letter.upper())

# print(letter.capitalize())

# print(letter.title())

# print(letter.swapcase())

# print(letter.split())

# print(letter.count('HoW'))

# s='안녕하세요..'

# print(s.strip('.'))

# print(s.replace('안녕하세요','안녕'))

# print(s.find("안녕"))
# print(s.center(9,'-'))

# 문자열 포멧

# print('개발 언어에는 {},{} 등이 있어요.'.format('파이썬','자바'))

# # f-string
# print(f'동물 2마리를 소개합니다 {python},{java}')

# print("사실\n'포테이토칩'도\n맛있어요")



#리스트  비닐봉투 같은것

# a= ['파이썬','자바']
# a.append('C언어,C쁠쁠')
# print(a)      

# tuple - 만들고나면 수정불가 거의 읽기전용이라고한다

# 세트

# a = {'돈가스','보쌈','제육'}
# b = {'짬뽕','초밥','제육'}
# a만 좋아하는 음식? 차집합

# print(a.difference(b))

# 둘다 좋아하는 음식? 합집합

# print(a.union(b))

# 두 친구가 공통으로 좋아하는 음식? 교집합

# print(a.intersection(b))
# a.remove('보쌈')

# print(a)


##딕셔너리 

# 딕셔너리 = {key1:value1,key2:value2,...}

# person ={
#     '이름':'정현오',
#     '나이':'23세',
#     '키':'181cm',
#     '몸무게':'85kg'
    
# }
# print(person['나이'])

# print(person.get('롤티어'))

# person['몸무게'] = '80kg'

# print(person['몸무게'])

# person.update({'키':'182cm','몸무게':'80kg'})
 #딕셔너리에서 특정 키 벨류를 삭제하려면 .pop 메서드
# print(person['키'])

# print(person.keys())

# print(person.items())

#딕셔너리 끝

#값이 바뀔 일이 없거나 바뀌면 안되는 경우 = 튜플

# today = '토요일'
# if today == '토요일':
#     print('게임 한 판')
# else:
#     print('폰 5분만')
# print('공부시작')


# if else 활용
     
# total = 3
# if total <= 4:
#     print('추가비용없습니다.')
# else:
#     print('1인당 만원입니다.')
# print('감사합니다.')
#if else 
