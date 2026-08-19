// Function: FUN_1404b5c88
// Addr: 1404b5c88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404b5cbf) */
/* WARNING: Removing unreachable block (ram,0x0001404b5ced) */
/* WARNING: Removing unreachable block (ram,0x0001404b5cef) */
/* WARNING: Removing unreachable block (ram,0x0001404b5cf9) */
/* WARNING: Removing unreachable block (ram,0x0001404b5d09) */
/* WARNING: Removing unreachable block (ram,0x0001404b5d19) */
/* WARNING: Removing unreachable block (ram,0x0001404b5d21) */
/* WARNING: Removing unreachable block (ram,0x0001404b5cd3) */

void FUN_1404b5c88(longlong param_1,undefined2 param_2,char *param_3,undefined1 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte *in_RAX;
  undefined7 uVar6;
  byte bVar7;
  byte unaff_BL;
  char *pcVar8;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  char *pcVar5;
  
  while( true ) {
    pbVar1 = in_RAX + -0x103fffe1;
    bVar7 = *pbVar1;
    *pbVar1 = *pbVar1 + unaff_BL;
    bVar3 = (byte)in_RAX - *in_RAX;
    uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
    bVar2 = bVar3 - CARRY1(bVar7,unaff_BL);
    param_1 = param_1 + -1;
    if (param_1 == 0) break;
    pcVar5 = (char *)((longlong)CONCAT71(uVar6,bVar2) * 2);
    *pcVar5 = *pcVar5 + bVar2;
    bVar7 = (byte)((ulonglong)param_1 >> 8);
    cVar4 = bVar2 + bVar7;
    in_RAX = (byte *)CONCAT71(uVar6,(cVar4 - *(char *)CONCAT71(uVar6,cVar4)) - CARRY1(bVar2,bVar7));
  }
  bVar3 = (bVar2 - *(char *)CONCAT71(uVar6,bVar2)) -
          ((byte)in_RAX < *in_RAX || bVar3 < CARRY1(bVar7,unaff_BL));
  pcVar5 = (char *)CONCAT71(uVar6,bVar3);
  *param_4 = *param_4;
  *pcVar5 = *pcVar5 + bVar3;
  pbVar1 = (byte *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x11);
  bVar7 = *pbVar1;
  bVar2 = (byte)((ulonglong)in_RAX >> 8);
  *pbVar1 = *pbVar1 + bVar2;
  cVar4 = (bVar3 - *pcVar5) - CARRY1(bVar7,bVar2);
  pcVar5 = (char *)CONCAT71(uVar6,cVar4);
  pcVar8 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),(ushort)bVar3);
  *(undefined1 *)((longlong)pcVar8 * 3) = *(undefined1 *)((longlong)pcVar8 * 3);
  *param_4 = *param_4;
  *pcVar5 = *pcVar5 + cVar4;
  pbVar1 = (byte *)(unaff_RDI + 0x7e001ae4);
  bVar7 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)param_2;
  out(param_2,(int)pcVar5);
  cVar4 = (cVar4 - *pcVar5) - CARRY1(bVar7,(byte)param_2);
  pcVar5 = (char *)CONCAT71(uVar6,cVar4);
  pcVar8[0x4b] = pcVar8[0x4b] - bVar3;
  cRam0000000000000000 = cRam0000000000000000 + bVar2;
  *pcVar5 = *pcVar5 + cVar4;
  *pcVar8 = *pcVar8 + bVar3;
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) = *(char *)CONCAT44(unaff_00000034,unaff_ESI) + cVar4;
  *pcVar5 = *pcVar5 + cVar4;
  *param_3 = *param_3 + (char)param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

