// Function: FUN_1404c18ac
// Addr: 1404c18ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c18ac(longlong param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  ulonglong in_RAX;
  char *pcVar7;
  byte bVar9;
  longlong unaff_RBX;
  longlong unaff_RDI;
  byte in_R11B;
  bool bVar10;
  int iVar6;
  ulonglong uVar8;
  
  bVar9 = (byte)param_1;
  pcVar7 = (char *)(in_RAX & 0xffffffffffffff42);
  *param_2 = *param_2 + bVar9;
  *pcVar7 = *pcVar7 + (char)pcVar7;
  *param_2 = *param_2 << 1 | (char)*param_2 < '\0';
  cVar4 = *pcVar7;
  pbVar1 = (byte *)(unaff_RDI * 4 + 0x19000002);
  *pbVar1 = *pbVar1 << 5 | *pbVar1 >> 3;
  iVar6 = (int)CONCAT71((int7)((ulonglong)pcVar7 >> 8),cVar4);
  uVar5 = iVar6 + 0x9420d00;
  uVar8 = (ulonglong)uVar5;
  if (!SCARRY4(iVar6,0x9420d00)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(uVar8 + unaff_RBX) = *(char *)(uVar8 + unaff_RBX) + (char)uVar5;
  pbVar1 = (byte *)(param_1 + 0x12);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + in_R11B;
  pbVar1 = (byte *)(uVar8 * 2 + 0x25);
  bVar10 = *pbVar1 < bVar9 || (byte)(*pbVar1 - bVar9) < CARRY1(bVar2,in_R11B);
  *pbVar1 = (*pbVar1 - bVar9) - CARRY1(bVar2,in_R11B);
  pbVar1 = (byte *)(uVar8 * 2 + 0x35);
  bVar2 = *pbVar1;
  bVar3 = *pbVar1;
  *pbVar1 = (bVar3 - bVar9) - bVar10;
  pcVar7 = (char *)(uVar8 * 2 + -0x50);
  *pcVar7 = (*pcVar7 - bVar9) - (bVar2 < bVar9 || (byte)(bVar3 - bVar9) < bVar10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

