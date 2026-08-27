// Function: FUN_140084ba0
// Addr: 140084ba0
// Size: 21 bytes


ulonglong FUN_140084ba0(longlong *param_1,longlong *param_2)

{
  if ((char)param_1[1] != '\0') {
    return (ulonglong)*(byte *)(param_2 + 1);
  }
  return CONCAT71((int7)((ulonglong)*param_2 >> 8),*param_1 == *param_2);
}

