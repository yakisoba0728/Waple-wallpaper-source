// Function: FUN_1404d12b0
// Addr: 1404d12b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d12b0(undefined8 param_1,undefined8 param_2,char param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint in_EAX;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  undefined7 uVar7;
  byte bVar8;
  undefined6 uVar9;
  byte *unaff_RBP;
  int unaff_ESI;
  byte in_R10B;
  undefined7 in_register_00000091;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar8 = (byte)param_2;
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  bVar6 = (byte)param_1;
  bVar1 = *param_4;
  *param_4 = *param_4 + in_R10B;
  iVar4 = in_EAX + 0x62150009 + (uint)CARRY1(bVar1,in_R10B);
  uVar2 = (uint)(0x9deafff6 < in_EAX || CARRY4(in_EAX + 0x62150009,(uint)CARRY1(bVar1,in_R10B)));
  iVar3 = iVar4 + unaff_ESI;
  pbVar5 = (byte *)(ulonglong)(iVar3 + uVar2);
  pavgb(in_MM1_Ba,(char)uRam000000014a0d1e97);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0d1e97 >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0d1e97 >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0d1e97 >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0d1e97 >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0d1e97 >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0d1e97 >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0d1e97 >> 0x38));
  if (SCARRY4(iVar4,unaff_ESI) == SCARRY4(iVar3,uVar2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar6;
  bVar6 = bVar6 + *unaff_RBP + CARRY1(bVar1,bVar6);
  bVar1 = *(byte *)CONCAT71(uVar7,bVar6);
  *(byte *)CONCAT71(uVar7,bVar6) = *(char *)CONCAT71(uVar7,bVar6) - bVar8;
  *(byte *)CONCAT62(uVar9,CONCAT11(0x2b,bVar8)) =
       (*(char *)CONCAT62(uVar9,CONCAT11(0x2b,bVar8)) - bVar8) -
       (CARRY1(bVar6,*unaff_RBP) || CARRY1(bVar6 + *unaff_RBP,bVar1 < bVar8));
  *(char *)CONCAT71(in_register_00000091,in_R10B) =
       *(char *)CONCAT71(in_register_00000091,in_R10B) + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

