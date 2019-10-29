public class Solution {
    
    public string DefangIPaddr(string address)
    {
            string newAddress = address.Replace(".", "[.]");
        return newAddress;
    }
}

// 14 mins