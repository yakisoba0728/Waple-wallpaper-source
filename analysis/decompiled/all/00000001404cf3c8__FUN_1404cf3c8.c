// Function: FUN_1404cf3c8
// Addr: 1404cf3c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf3c8(byte *param_1,undefined8 param_2,byte param_3)

{
  char *pcVar1;
  uint7 uVar2;
  byte bVar3;
  uint uVar4;
  char *in_RAX;
  uint *puVar5;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  char cVar10;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  byte *unaff_RDI;
  char unaff_R12B;
  byte *pbVar6;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  uVar2 = (uint7)((ulonglong)param_2 >> 8);
  *(char *)((ulonglong)uVar2 << 8) = *(char *)((ulonglong)uVar2 << 8) + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  pcVar1 = (char *)(((ulonglong)in_RAX ^ 0x12) + 0x2d);
  *pcVar1 = *pcVar1 + cVar10;
  *(undefined1 *)((ulonglong)uVar2 << 8) = *(undefined1 *)((ulonglong)uVar2 << 8);
  puVar5 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)((ulonglong)in_RAX ^ 0x12) * '\x02'
                           );
  bVar3 = *param_1;
  *param_1 = *param_1 + param_3;
  iVar8 = (int)param_1 + *puVar5 + (uint)CARRY1(bVar3,param_3);
  *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL) =
       *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL);
  uVar4 = (uint)puVar5 | *puVar5;
  pbVar6 = (byte *)(ulonglong)uVar4;
  *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL) =
       *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL);
  bVar7 = (byte)iVar8 ^ *unaff_RDI;
  pbVar9 = (byte *)((ulonglong)CONCAT31((int3)((uint)iVar8 >> 8),bVar7) - 1);
  bVar3 = (byte)uVar4;
  if (pbVar9 == (byte *)0x0 || bVar7 == 0) {
    *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL) =
         *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL);
    uRam00000001b451f3fc = uRam00000001b451f3fc & uVar4;
    *pbVar6 = *pbVar6 | bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*pbVar6 != bVar3) {
    *pbVar9 = *pbVar9 + unaff_R12B;
    puVar5 = (uint *)(ulonglong)(uVar4 + 0xf4050002);
    *puVar5 = *puVar5 | uVar4 + 0xf4050002;
    if (*puVar5 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar9[unaff_RBP] = pbVar9[unaff_RBP] + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar7 = *pbVar9;
  *pbVar9 = *pbVar9 + param_3;
  *(char *)((longlong)pbVar6 * 2) =
       (*(char *)((longlong)pbVar6 * 2) - bVar3) - CARRY1(bVar7,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

