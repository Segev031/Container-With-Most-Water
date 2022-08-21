def maxArea(height):
        """
        :type height: List[int]
        :rtype: int
        """
        i = 0
        j = len(height) - 1
        max = 0
        while i < j:
            area = min(height[i], height[j]) * (j - i)
            if area > max:
                max = area
            if (height[i] < height[j]):
                i += 1
            else:
                j -= 1
        
        return max