// Function: FUN_1404cf938
// Addr: 1404cf938
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf938(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  char *in_RAX;
  byte bVar6;
  byte bVar7;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RDI;
  char *pcVar5;
  
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  bVar6 = (byte)param_2 + in_RAX[0x21];
  *in_RAX = *in_RAX - CARRY1((byte)param_2,in_RAX[0x21]);
  pbVar1 = (byte *)(unaff_RDI + -0x18);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  uVar4 = (int)in_RAX + 0x16d86e00 + (uint)CARRY1(bVar2,bVar7);
  pcVar5 = (char *)(ulonglong)uVar4;
  pcVar5[param_1 * 8 + 0x17] = pcVar5[param_1 * 8 + 0x17] + unaff_BL;
  pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + -0x48);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar6;
  cVar3 = (char)uVar4;
  *pcVar5 = (*pcVar5 - cVar3) - CARRY1(bVar2,bVar6);
  *(char *)(param_1 + -0x68) = *(char *)(param_1 + -0x68) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

