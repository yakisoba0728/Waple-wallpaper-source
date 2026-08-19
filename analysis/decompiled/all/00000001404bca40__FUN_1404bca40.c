// Function: FUN_1404bca40
// Addr: 1404bca40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bca40(char *param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  uint in_EAX;
  uint uVar1;
  char unaff_BPL;
  undefined4 *unaff_RSI;
  
  uVar1 = in_EAX ^ 0xc9;
  *param_4 = *param_4;
  *param_2 = *param_2 | uVar1;
  *param_1 = *param_1 + (char)param_1;
  *(byte *)(ulonglong)(uint)(int)(short)uVar1 =
       *(byte *)(ulonglong)(uint)(int)(short)uVar1 | (byte)uVar1;
  *param_4 = *param_4 + unaff_BPL + (char)*unaff_RSI + '\b';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

