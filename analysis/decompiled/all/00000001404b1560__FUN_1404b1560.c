// Function: FUN_1404b1560
// Addr: 1404b1560
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1560(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte bVar4;
  int in_EAX;
  int iVar1;
  uint uVar2;
  char cVar5;
  byte bVar6;
  char cVar7;
  char unaff_SPL;
  undefined7 unaff_00000021;
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RDI;
  char *pcVar3;
  
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  uVar2 = in_EAX + 0x4b146800;
  *param_1 = *param_1 + (char)(uVar2 >> 8);
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  cVar5 = (byte)param_2 + bVar6;
  iVar1 = in(CONCAT11(bVar6,cVar5));
  uVar2 = iVar1 + 0x15ee8500 + (uint)CARRY1((byte)param_2,bVar6);
  pcVar3 = (char *)(ulonglong)uVar2;
  pcVar3[0x14] = pcVar3[0x14] + (char)((ulonglong)param_1 >> 8);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar3 = *pcVar3 + (char)uVar2;
  bVar4 = (byte)(uVar2 >> 8);
  cVar7 = bVar6 + bVar4;
  iVar1 = in(CONCAT11(cVar7,cVar5));
  uVar2 = iVar1 + 0x15edf200 + (uint)CARRY1(bVar6,bVar4);
  pcVar3 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + 0x4b +
                   CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar7,cVar5)));
  *pcVar3 = *pcVar3 + cVar5;
  *param_1 = *param_1 + (char)(uVar2 >> 8);
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  in(CONCAT11(cVar7,cVar5));
  pcVar3 = (char *)(unaff_RDI + 0x521004a + CONCAT44(unaff_0000002c,unaff_EBP) * 4);
  *pcVar3 = *pcVar3 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

