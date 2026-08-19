// Function: FUN_1404acc7c
// Addr: 1404acc7c
// Size: 1 bytes


char FUN_1404acc7c(undefined8 param_1,longlong param_2)

{
  byte in_AL;
  byte in_AH;
  longlong unaff_RBP;
  
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + in_AH + in_AL;
  *(char *)(unaff_RBP + 0x5c0010d5) =
       *(char *)(unaff_RBP + 0x5c0010d5) + (char)((ulonglong)param_2 >> 8);
  return in_AL + CARRY1(in_AH,in_AL);
}

