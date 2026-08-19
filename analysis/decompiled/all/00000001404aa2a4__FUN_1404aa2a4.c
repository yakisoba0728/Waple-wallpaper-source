// Function: FUN_1404aa2a4
// Addr: 1404aa2a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404aa2e8) overlaps instruction at (ram,0x0001404aa2e5)
    */

void FUN_1404aa2a4(longlong param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  uint *in_RAX;
  uint *puVar6;
  char *pcVar7;
  byte bVar8;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  pcVar7 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + param_1);
  *pcVar7 = *pcVar7 + (char)((ulonglong)in_RAX >> 8);
  bVar8 = (byte)param_2;
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] + bVar8;
  uVar2 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),0xdc) | 0xdde7500;
  bVar4 = (byte)(uVar2 >> 8);
  *(char *)(param_1 + 0x21004a) = *(char *)(param_1 + 0x21004a) + bVar4;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + -0x24;
  *(char *)(param_1 + 0xc21004a) = *(char *)(param_1 + 0xc21004a) + (bVar4 | 0x75);
  uVar2 = (uint)CONCAT71((uint7)(uint3)(uVar2 >> 8),0xdc) | 0xdde7574;
  iVar3 = uVar2 + 0xe0000764;
  if (param_1 == 1 || iVar3 != 0) {
    cVar1 = (char)((uint)iVar3 >> 8) * '\x02';
    puVar6 = (uint *)(param_1 + -2);
    if (puVar6 == (uint *)0x0 || cVar1 != '\0') {
      pcVar7 = (char *)((ulonglong)
                        CONCAT22((short)((uint)iVar3 >> 0x10),CONCAT11(cVar1,(char)iVar3)) +
                       0x210049e1);
      *pcVar7 = *pcVar7 + (char)iVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in(0xe1);
code_r0x0001404aa2f3:
    uVar2 = uRame1e000000021004a | 0xde1e400;
  }
  else {
    iVar3 = uVar2 + 0xc4000d98;
    puVar6 = (uint *)(param_1 + -2);
    if (puVar6 != (uint *)0x0 && iVar3 == 0) {
      in(0xe1);
      goto code_r0x0001404aa2f3;
    }
    *param_2 = *param_2 + (char)puVar6;
    pcVar7 = (char *)(param_1 + -3);
    puVar6 = (uint *)0x0;
    if (pcVar7 == (char *)0x0) goto code_r0x0001404aa2f3;
    cVar1 = (char)iVar3;
    uVar2 = CONCAT22((short)((uint)iVar3 >> 0x10),CONCAT11((byte)((uint)iVar3 >> 8) | bVar8,cVar1))
            | 0x4aa1fc00;
    cVar5 = (char)(uVar2 >> 8);
    *pcVar7 = *pcVar7 + cVar5;
    *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + cVar1;
    cVar1 = cVar1 + cVar5;
    pcVar7 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),cVar1);
    puVar6 = (uint *)(param_1 + -4);
    if (puVar6 != (uint *)0x0 && cVar1 == '\0') {
      *(uint *)(unaff_RDI + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
           *(uint *)(unaff_RDI + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) & unaff_ESI;
      goto code_r0x0001404aa31f;
    }
    uVar2 = CONCAT22((short)(uVar2 >> 0x10),CONCAT11(cVar5 * '\x02',cVar1));
    puVar6 = (uint *)(param_1 + -5);
    if (puVar6 != (uint *)0x0 && (char)(cVar5 * '\x02') == '\0') {
      *puVar6 = *puVar6 & uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  pcVar7 = (char *)((ulonglong)uVar2 + 0x10049e1);
  *pcVar7 = *pcVar7 + (char)uVar2;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & (uint)puVar6;
  *(char *)puVar6 = (char)*puVar6 + (char)(uVar2 >> 8);
  pcVar7 = (char *)((ulonglong)uVar2 ^ 0x1f);
code_r0x0001404aa31f:
  *(char *)puVar6 = (char)*puVar6 + (char)((ulonglong)pcVar7 >> 8);
  *(int *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(int *)CONCAT44(unaff_00000034,unaff_ESI) + (int)param_2;
  cRam00000001522ab719 = cRam00000001522ab719 + bVar8;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *pcVar7 = *pcVar7 + (char)pcVar7;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

