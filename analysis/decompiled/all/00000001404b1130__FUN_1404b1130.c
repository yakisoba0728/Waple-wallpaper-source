// Function: FUN_1404b1130
// Addr: 1404b1130
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1130(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  int in_EAX;
  int iVar4;
  byte bVar5;
  char unaff_SPL;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  bVar5 = (byte)((ulonglong)param_1 >> 8);
  pbVar1 = (byte *)(unaff_RDI + -0x5065ffeb);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar5;
  iVar4 = in_EAX + 0x4afc8000 + (uint)CARRY1(bVar3,bVar5);
  *param_1 = *param_1 + (char)((uint)iVar4 >> 8);
  pcVar2 = (char *)(unaff_RDI + 0x10580015 + unaff_RBP * 4);
  *pcVar2 = *pcVar2 + ((byte)((uint)(iVar4 + -0x3bfafffe) >> 8) | 0x9a);
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

