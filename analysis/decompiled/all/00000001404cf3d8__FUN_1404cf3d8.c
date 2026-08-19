// Function: FUN_1404cf3d8
// Addr: 1404cf3d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf3d8(undefined8 param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 in_RAX;
  uint *puVar3;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  char unaff_R12B;
  byte *pbVar4;
  
  pbVar4 = (byte *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                            CONCAT11((byte)((ulonglong)param_1 >> 8) & *unaff_RSI,(char)param_1));
  puVar3 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX * '\x02');
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + param_3;
  iVar6 = (int)pbVar4 + *puVar3 + (uint)CARRY1(bVar1,param_3);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_2;
  uVar2 = (uint)puVar3 | *puVar3;
  pbVar4 = (byte *)(ulonglong)uVar2;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_2;
  bVar5 = (byte)iVar6 ^ *unaff_RDI;
  pbVar7 = (byte *)((ulonglong)CONCAT31((int3)((uint)iVar6 >> 8),bVar5) - 1);
  bVar1 = (byte)uVar2;
  if (pbVar7 == (byte *)0x0 || bVar5 == 0) {
    *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL) =
         *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL);
    uRam00000001b451f3fc = uRam00000001b451f3fc & uVar2;
    *pbVar4 = *pbVar4 | bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*pbVar4 != bVar1) {
    *pbVar7 = *pbVar7 + unaff_R12B;
    puVar3 = (uint *)(ulonglong)(uVar2 + 0xf4050002);
    *puVar3 = *puVar3 | uVar2 + 0xf4050002;
    if (*puVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar7[unaff_RBP] = pbVar7[unaff_RBP] + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar5 = *pbVar7;
  *pbVar7 = *pbVar7 + param_3;
  *(char *)((longlong)pbVar4 * 2) =
       (*(char *)((longlong)pbVar4 * 2) - bVar1) - CARRY1(bVar5,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

