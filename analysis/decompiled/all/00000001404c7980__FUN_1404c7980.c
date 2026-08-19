// Function: FUN_1404c7980
// Addr: 1404c7980
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7980(uint param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint *in_RAX;
  byte bVar7;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RDI;
  longlong lVar6;
  
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & param_1;
  cVar4 = (char)in_RAX + (char)*in_RAX;
  lVar6 = CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4);
  pbVar2 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + param_2);
  *pbVar2 = *pbVar2 | bVar7;
  *(char *)(lVar6 + -0x3effd049) = *(char *)(lVar6 + -0x3effd049) + cVar4;
  *(char *)(lVar6 + 0x21004c78) = *(char *)(lVar6 + 0x21004c78) + (char)((ulonglong)in_RAX >> 8);
  uVar5 = (int)lVar6 + 0xe4050002;
  bVar3 = *(byte *)(ulonglong)uVar5;
  *(int *)(unaff_RDI + -0x47fcffd1) = *(int *)(unaff_RDI + -0x47fcffd1) << 0xf;
  pcVar1 = (char *)((ulonglong)CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 | bVar3) + 0x21004c78);
  *pcVar1 = *pcVar1 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

