# -*- coding: utf-8 -*-

from .context import src

import unittest


class AdvancedTestSuite(unittest.TestCase):
    """Advanced test cases."""

    def test_get_sum(self):
        self.assertEqual(src.get_sum(2,3), 5, "2 + 3 != 5 FAIL")
        self.assertNotEqual(src.get_sum(1,2), 4, "1 + 2 = 4 FAIL")
        self.assertIsNone(src.get_sum('hi', 'bye'), "Strings Summed FAIL")
        # similarly assertIsNotNone(..) is also there

    def test_get_availability(self):
        self.assertTrue(src.get_availability(123, "zia"), "(123, zia) not present FAIL")
        self.assertFalse(src.get_availability(123, "ghani"), "(123, ghani) present FAIL")


if __name__ == '__main__':
    unittest.main()
