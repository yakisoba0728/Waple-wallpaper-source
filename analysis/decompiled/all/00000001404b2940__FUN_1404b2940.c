// Function: FUN_1404b2940
// Addr: 1404b2940
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2940(byte *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  char *pcVar2;
  int in_EAX;
  undefined4 in_register_00000004;
  char in_R10B;
  
  piVar1 = (int *)(CONCAT44(in_register_00000004,in_EAX) + 0xc);
  *piVar1 = *piVar1 + in_EAX;
  pcVar2 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 0x68);
  *pcVar2 = *pcVar2 + (byte)in_EAX;
  *param_1 = *param_1 & (byte)in_EAX & *(byte *)CONCAT44(in_register_00000004,in_EAX);
  *param_4 = *param_4 + in_R10B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

