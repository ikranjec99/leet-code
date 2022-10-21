namespace TwoSum
{
    public static class Solution
    {
        public static int[] Run(int[] nums, int target)
        {
            var dictionary = new Dictionary<int, int>();

            int counter = 0;

            foreach (int num in nums)
            {
                dictionary.Add(counter, num);
                counter++;
            }

            counter = 0;

            foreach (int num in nums)
            {
                int complement = target - num;

                var sameElements = dictionary.ToLookup(x => x.Value, x => x.Key)
                                             .Any(x => x.Count() > 1);

                if (sameElements)
                {
                    return new int[2]
                    {
                        0, 1
                    };
                }

                if (complement != num)
                {
                    return new int[2] 
                    {
                        dictionary.Where(x => x.Value == complement).FirstOrDefault().Key,
                        dictionary.Where(x => x.Value == num).FirstOrDefault().Key
                    };
                }
            }

            return new int[] { };
        }
    }
}
