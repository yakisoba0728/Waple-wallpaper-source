// Function: FUN_1404baa18
// Addr: 1404baa18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404baa18(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  int in_EAX;
  byte *pbVar2;
  char unaff_SPL;
  
  pbVar2 = (byte *)(ulonglong)(in_EAX + 0x400006c4U);
  bVar1 = (byte)(in_EAX + 0x400006c4U);
  *pbVar2 = *pbVar2 & bVar1;
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + bVar1;
  *pbVar2 = *pbVar2 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

