int Solution::solve(int A, int B) 
{
    int ans;
    ans = min(abs(8-A),abs(8-B)) +      // TOP-RIGHT
          min(abs(8-A),abs(1-B)) +      // TOP-LEFT
          min(abs(1-A),abs(1-B)) +      // BOTTOM-LEFT
          min(abs(1-A),abs(8-B));       // BOTTOM-RIGHT
    return ans;
}
