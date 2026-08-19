// Function: FUN_1404bef64
// Addr: 1404bef64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bef64(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  undefined4 in_EAX;
  longlong unaff_RSI;
  
  *(char *)(param_1 + 0x4c00269e) = *(char *)(param_1 + 0x4c00269e) + (char)param_1;
  out((short)param_2,in_EAX);
  *param_4 = *param_4 + (char)in_EAX;
  *(char *)(param_2 + unaff_RSI) = *(char *)(param_2 + unaff_RSI) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

