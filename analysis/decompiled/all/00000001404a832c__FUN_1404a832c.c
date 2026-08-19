// Function: FUN_1404a832c
// Addr: 1404a832c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a835c) overlaps instruction at (ram,0x0001404a835a)
    */

void FUN_1404a832c(longlong param_1,char *param_2)

{
  uint uVar1;
  undefined3 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint *in_RAX;
  uint *puVar7;
  char *pcVar8;
  char unaff_BL;
  undefined7 unaff_00000019;
  int *unaff_RDI;
  undefined2 in_ES;
  char in_ZF;
  char *pcVar6;
  
  pcVar8 = (char *)(param_1 + -1);
  uVar5 = (uint)in_RAX;
  if (pcVar8 == (char *)0x0 || in_ZF != '\0') {
    uVar1 = *in_RAX;
    *pcVar8 = -*pcVar8;
    uVar5 = uVar5 | uVar1 | *(uint *)(ulonglong)(uVar5 | uVar1);
    cVar3 = (char)uVar5 + -0x7e;
    pcVar6 = (char *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),cVar3);
    *pcVar8 = *pcVar8;
    *param_2 = *param_2 + (char)pcVar8;
    *pcVar6 = *pcVar6 + cVar3;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  bVar4 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar4;
  if ((byte)*in_RAX != 0) {
    uVar1 = *in_RAX;
    *(byte *)in_RAX = (byte)*in_RAX + bVar4;
    *in_RAX = (*in_RAX - uVar5) - (uint)CARRY1((byte)uVar1,bVar4);
    pcVar8 = (char *)(param_1 + -2);
    if (pcVar8 == (char *)0x0 || *in_RAX == 0) {
      uVar1 = *in_RAX;
      *pcVar8 = -*pcVar8;
      *pcVar8 = *pcVar8 + ((byte)(uVar5 | uVar1) | (byte)*(undefined4 *)(ulonglong)(uVar5 | uVar1))
                          + 0x82;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)in_RAX = (byte)*in_RAX + (char)pcVar8;
    puVar7 = (uint *)((ulonglong)in_RAX ^ 0x15);
    *(char *)(puVar7 + 8) = (char)puVar7[8] + (char)((ulonglong)param_2 >> 8);
    uVar5 = (uint)puVar7 | *puVar7;
    uVar5 = uVar5 | *(uint *)(ulonglong)uVar5;
    *(undefined2 *)(param_2 + 0x2921004a) = in_ES;
    uVar2 = (undefined3)(uVar5 >> 8);
    bVar4 = (byte)uVar5 | *(byte *)(ulonglong)uVar5;
    uVar5 = CONCAT31(uVar2,(bVar4 | *(byte *)(ulonglong)CONCAT31(uVar2,bVar4)) - (char)(uVar5 >> 8))
    ;
    uVar5 = (uVar5 | *(uint *)(ulonglong)uVar5) + 0xd000c74;
    pcVar6 = (char *)(ulonglong)(uVar5 | 0xe540500);
    cVar3 = (char)uVar5;
    *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar3;
    *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
         *(uint *)CONCAT71(unaff_00000019,unaff_BL) & (uint)pcVar8;
    *(char *)CONCAT71(unaff_00000019,unaff_BL) =
         *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)pcVar8;
    *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
         *(uint *)CONCAT71(unaff_00000019,unaff_BL) & (uint)pcVar8;
    pcVar6[0x21004a82] = pcVar6[0x21004a82] + unaff_BL;
    *param_2 = *param_2 + cVar3;
    *pcVar6 = *pcVar6 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

