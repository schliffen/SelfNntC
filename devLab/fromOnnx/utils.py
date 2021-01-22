from typing import Iterable
from functools import reduce

__author__ = ""


def reduce_mult(data: Iterable[int]) -> int:
    return reduce(lambda x, y: x * y, data, 1)
