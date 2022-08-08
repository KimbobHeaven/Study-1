JavaScript
===
Reference : [javascript.info](javascript.info "javascript.info")  

# 1. An Introduction
## 1.1. 
자바스크립트 : 웹페이지에 생동감을 붙여넣기 위해 만들어진 프로그래밍 언어  
    작성한 프로그램 : 스크립트, HTML 안에 작성 가능, 특별한 컴파일 없이 문자형태로 작성 가능
    서버에서도 실행가능  
    자바스크립트 엔진이 들어있는 모든 디바이스에서도 동작  
    브라우저에는 자바스크립트 가상 머신이라는 엔진이 내장  
        V8(Chrome, Opera), SpiderMonkey(Firefox), IE(Microsoft Edge, Safari) 등등
        작동과정 : 스크립트 읽기(파싱) -> 기계어 전환(컴파일) -> 코드실행  
    
브라우저에서 할 수 있는 일 :
    메모리나 cpu같은 저수준 영역의 조작을 허용하지 않음
    자바스크립트의 능력은 실행 환경에 상당한 영향을 받음
        ex : Node.js 환경에서는 임의의 파일을 읽거나 쓰고, 네트워크 요청을 수행하는 함수 지원
    등등

브라우저에서 할 수 없는 일 :
    디스크 관련
    탭과 창간의 정보 공유
    타 사이트, 도메인과 정보공유
    등등
    
강점 :
    HTML/CSS 와 완전히 통합
    간단한 일은 간단하게
    모든 주요 브라우저에서 지원, 기본언어

추가 언어 : 
    CoffeScript : syntactic suger, Ruby 개발자들이 좋아함
    TypeScript : strict data typing에 집중, Microsoft에서 개발
    Flow : TypeScript와 다른 방식의 자료형 강제, Facebook이 개발
    Dart : 브라우저가 아닌 환경에서 동작하는 고유의 엔진을 가진 독자적 언어, Googl이 개발

## 1.2.
명세서
    ECMA-262 specification

매뉴얼
    MDN JavaScript Reference

호환성 표
    ...

## 1.3.


# 2. JavaScript Fundamentals
# 3. Code Quality
# 4. Objects: The Basics
# 5. Data Types
# 6. Advanced Working With Functions
# 7. Object Properties Configuration
# 8. Prototypes, Inheritance
# 9. Classes
# 10. Error Handling
# 11. Promises, async/await
# 12. Generators, Advanced Iteration
# 13. Modules
# 14. Miscellaneous