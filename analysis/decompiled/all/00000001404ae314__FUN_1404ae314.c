// Function: FUN_1404ae314
// Addr: 1404ae314
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404ae35a) */

void FUN_1404ae314(undefined8 param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *in_RAX;
  uint *puVar10;
  byte bVar12;
  undefined4 *unaff_RSI;
  undefined1 *unaff_RDI;
  char *pcVar11;
  
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  puVar10 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + (char)*in_RAX);
  *(char *)((longlong)puVar10 + 5) =
       *(char *)((longlong)puVar10 + 5) + (char)((ulonglong)param_1 >> 8);
  pbVar1 = (byte *)((longlong)puVar10 + 0x21);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar12;
  uVar5 = (uint)puVar10 + *puVar10;
  uVar7 = uVar5 + CARRY1(bVar2,bVar12);
  out(*unaff_RSI,(short)param_2);
  uVar4 = (uint)(CARRY4((uint)puVar10,*puVar10) || CARRY4(uVar5,(uint)CARRY1(bVar2,bVar12)));
  uVar5 = *(uint *)(ulonglong)uVar7;
  uVar6 = uVar7 + *(uint *)(ulonglong)uVar7;
  uVar8 = uVar6 + uVar4;
  uVar3 = in((short)param_2);
  *unaff_RDI = uVar3;
  uRam00000001a44fe330 = uRam00000001a44fe330 & uVar8;
  uVar8 = uVar8 + *(int *)(ulonglong)uVar8 + *(int *)(ulonglong)(uVar8 + *(int *)(ulonglong)uVar8) +
          0xc4050002;
  uVar9 = uVar8 | 0x13290b00;
  pcVar11 = (char *)(ulonglong)uVar9;
  cRam00000001984af676 = cRam00000001984af676 + (char)param_2;
  if (CONCAT71((int7)((ulonglong)param_1 >> 8),
               ((char)param_1 - *param_2) - (CARRY4(uVar7,uVar5) || CARRY4(uVar6,uVar4))) != 1) {
    *pcVar11 = *pcVar11 + (char)uVar8;
    pcVar11[0x28] = pcVar11[0x28] + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam0000000000000000 = cRam0000000000000000 + (char)(uVar9 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

