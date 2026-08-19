// Function: FUN_1404c3d4c
// Addr: 1404c3d4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3d4c(byte param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined8 in_RAX;
  undefined7 uVar6;
  char *pcVar5;
  char cVar7;
  byte bVar8;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RSI;
  byte in_CF;
  bool bVar9;
  
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  cVar7 = (char)param_2;
  bVar4 = (byte)in_RAX + 0x32;
  bVar9 = 0xcd < (byte)in_RAX || CARRY1(bVar4,in_CF);
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar3 = bVar4 + in_CF;
  pbVar1 = (byte *)(CONCAT71(uVar6,cVar3) + 1);
  bVar4 = *pbVar1;
  bVar2 = *pbVar1 + bVar8;
  *pbVar1 = bVar2 + bVar9;
  bVar4 = cVar3 + *unaff_RSI + (CARRY1(bVar4,bVar8) || CARRY1(bVar2,bVar9));
  *param_2 = *param_2 + cVar7;
  if (*param_2 != '\0') {
    *param_2 = *param_2 + cVar7;
    *param_2 = *param_2 + cVar7;
    *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
         *(byte *)CONCAT71(unaff_00000019,unaff_BL) >> (param_1 & 7) |
         *(char *)CONCAT71(unaff_00000019,unaff_BL) << 8 - (param_1 & 7);
    uRam0000000174513d68 = uRam0000000174513d68 & ((uint)CONCAT71(uVar6,bVar4) ^ 0x10);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bRam000000014d7b3d9a = bRam000000014d7b3d9a & param_1;
  pcVar5 = (char *)CONCAT71(uVar6,bVar4);
  *param_4 = *param_4;
  *pcVar5 = *pcVar5 + bVar4;
  *pcVar5 = *pcVar5 + (char)((ulonglong)in_RAX >> 8);
  *param_4 = *param_4 + (bVar4 | 0x2c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

