// Function: FUN_140017650
// Addr: 140017650
// Size: 31 bytes


ulonglong FUN_140017650(longlong *param_1,longlong *param_2)

{
  if ((char)param_1[1] != '\0') {
    return (ulonglong)((char)param_2[1] == '\0');
  }
  return CONCAT71((int7)((ulonglong)*param_2 >> 8),*param_1 != *param_2);
}

