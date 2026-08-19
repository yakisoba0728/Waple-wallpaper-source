// Function: FUN_1404b2588
// Addr: 1404b2588
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2588(undefined8 param_1,char *param_2)

{
  byte *pbVar1;
  int in_EAX;
  undefined4 in_register_00000004;
  byte in_CF;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX + (uint)in_CF;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,in_EAX) + 4);
  *pbVar1 = *pbVar1 & (byte)((ulonglong)param_1 >> 8);
  *param_2 = *param_2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

