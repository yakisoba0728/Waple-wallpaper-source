// Function: FUN_1404d42ac
// Addr: 1404d42ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d42ac(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  int in_EAX;
  byte *pbVar4;
  char unaff_BH;
  
  *param_2 = *param_2 - unaff_BH;
  cVar3 = (char)(in_EAX + -0x5ffff8cc) + (char)param_2;
  uVar2 = CONCAT31((int3)((uint)(in_EAX + -0x5ffff8cc) >> 8),cVar3);
  *param_2 = *param_2 - unaff_BH;
  pcVar1 = (char *)((ulonglong)uVar2 + 0x210049e1);
  *pcVar1 = *pcVar1 + cVar3;
  pbVar4 = (byte *)(ulonglong)(uVar2 + 0x74050002);
  *pbVar4 = *pbVar4 >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

