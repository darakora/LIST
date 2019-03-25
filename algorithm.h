#ifndef ALGORITHM_H_INCLUDED
#define ALGORITHM_H_INCLUDED

namespace stu
{
template<class InputIt, class UnaryPredicate>
constexpr InputIt find_if(InputIt first, InputIt last, UnaryPredicate p)
{
    for (; first != last; ++first)
    {
        if (p(*first))
        {
            return first;
        }
    }
    return last;
}
}

#endif // ALGORITHM_H_INCLUDED
