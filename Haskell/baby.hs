-- Chapter 2
doubleMe x = x + x
--doubleUs x y = x * 2 + y * 2
doubleUs x y = doubleMe x + doubleMe y
doubleSmallNumber x = if x > 100
                        then x
                        else x*2
doubleSmallNumber' x =
    (if x > 100
        then x
        else x*2) + 1
boomBangs xs = [if x < 10 then "BOOM!" else "BANG!" | x <- xs, odd x]
removeNonUpperCase string = [c | c <- string, c `elem` ['A'..'Z']]
-- Chapter 4
initials :: String -> String -> String
--initials (f:first) (l:last) = [f] ++ ". " ++ [l] ++ "."
initials (f:first) (l:last) = f : '.' : ' ' : l : "."