// Function: FUN_1404c8030
// Addr: 1404c8030
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8030(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char cVar7;
  uint *in_RAX;
  undefined7 uVar8;
  char *pcVar9;
  char cVar10;
  char *unaff_RBX;
  longlong unaff_RDI;
  char unaff_R12B;
  byte *pbVar5;
  char *pcVar6;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar2 = (byte)in_RAX;
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + cVar10;
  cVar7 = (char)((ulonglong)in_RAX >> 8);
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + cVar7;
  pcVar9 = (char *)(ulonglong)((uint)param_1 ^ *(uint *)(param_2 + -0x75b8ffd0));
  *(byte *)in_RAX = (byte)*in_RAX ^ bVar2;
  bVar3 = bVar2 + 0x81;
  pbVar5 = (byte *)CONCAT71(uVar8,bVar3);
  *pcVar9 = *pcVar9 + unaff_R12B;
  *pbVar5 = *pbVar5 + bVar3;
  *unaff_RBX = *unaff_RBX + cVar10;
  *(char *)(unaff_RDI + -0x76) = *(char *)(unaff_RDI + -0x76) + bVar3;
  *pbVar5 = *pbVar5 ^ bVar3;
  cVar4 = bVar2 + 2;
  pcVar6 = (char *)CONCAT71(uVar8,cVar4);
  *pcVar9 = *pcVar9 + unaff_R12B;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar6 = *pcVar6 + (char)param_2;
  *unaff_RBX = *unaff_RBX + *pcVar6;
  cVar1 = *pcVar6;
  cVar10 = *pcVar6;
  *pcVar6 = *pcVar6 + cVar7;
  if (*pcVar6 == '\0' || SCARRY1(cVar10,cVar7) != *pcVar6 < '\0') {
    *pcVar9 = *pcVar9 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar9 = *pcVar9 + cVar7;
  *pcVar6 = *pcVar6 + cVar4;
  *pcVar9 = *pcVar9 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

