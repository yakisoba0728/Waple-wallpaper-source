// Function: FUN_1404c0400
// Addr: 1404c0400
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0400(char *param_1,char param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined8 in_RAX;
  undefined7 uVar8;
  char unaff_BH;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  byte *pbVar6;
  longlong lVar7;
  
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar3 = in(0x4a);
  pbVar6 = (byte *)CONCAT71(uVar8,bVar3);
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *pbVar6 = *pbVar6 + bVar3;
  pbVar6[0x28] = pbVar6[0x28] + param_2;
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 - bVar3;
  if (bVar2 < bVar3 || *pbVar6 == 0) {
    *pbVar6 = *pbVar6 - bVar3;
    cVar4 = in(0x4a);
    lVar7 = CONCAT71(uVar8,cVar4);
    *param_1 = *param_1 + cVar4;
    pcVar1 = (char *)(lVar7 + (longlong)param_1 * 4);
    *pcVar1 = *pcVar1 + unaff_BH;
    uVar5 = (int)lVar7 + 0x6782900;
    pbVar6 = (byte *)(ulonglong)uVar5;
    bVar2 = *pbVar6;
    bVar3 = (byte)(uVar5 >> 8);
    *pbVar6 = *pbVar6 + bVar3;
    *(uint *)pbVar6 = *(int *)pbVar6 + uVar5 + (uint)CARRY1(bVar2,bVar3);
    *(char *)CONCAT44(unaff_0000003c,unaff_EDI) =
         *(char *)CONCAT44(unaff_0000003c,unaff_EDI) << 1 |
         *(char *)CONCAT44(unaff_0000003c,unaff_EDI) < '\0';
  }
  *(int *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(int *)CONCAT44(unaff_0000003c,unaff_EDI) + unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

