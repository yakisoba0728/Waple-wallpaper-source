// Function: FUN_1404a58fc
// Addr: 1404a58fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a590f) overlaps instruction at (ram,0x0001404a590d)
    */

void FUN_1404a58fc(undefined1 *param_1,ulonglong param_2)

{
  char *pcVar1;
  uint7 uVar2;
  int in_EAX;
  uint uVar3;
  byte bVar5;
  char cVar6;
  undefined6 uVar7;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RDI;
  char unaff_retaddr;
  uint *puVar4;
  
  uVar7 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar6 = (char)((ulonglong)param_1 >> 8);
  bVar5 = (byte)param_1;
  uVar3 = in_EAX + 0xc8000774;
  puVar4 = (uint *)(ulonglong)uVar3;
  if (uVar3 == 0) {
    *param_1 = *param_1;
  }
  else {
    cVar6 = cVar6 + bVar5;
    if (cVar6 == '\0') {
      cVar6 = (char)uVar3;
      cRam000000010d4a5ff9 = cRam000000010d4a5ff9 + cVar6;
      if (cRam000000010d4a5ff9 == '\0') {
        *(char *)CONCAT62(uVar7,(ushort)bVar5) = *(char *)CONCAT62(uVar7,(ushort)bVar5) + cVar6;
      }
      else if ((param_2 & 0x7f) == 0) {
        *unaff_RDI = *unaff_RDI + cVar6;
        cRam6437001037210000 = cVar6;
        *puVar4 = *puVar4 | uVar3;
        in(5);
        uVar2 = (uint7)(param_2 >> 8);
        *(char *)((ulonglong)uVar2 << 8) = *(char *)((ulonglong)uVar2 << 8) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(char *)puVar4 = (char)*puVar4;
      *(char *)CONCAT62(uVar7,(ushort)bVar5) =
           *(char *)CONCAT62(uVar7,(ushort)bVar5) + unaff_retaddr;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  pcVar1 = (char *)((longlong)puVar4 + CONCAT71(unaff_00000019,unaff_BL) * 2);
  *pcVar1 = *pcVar1 + (char)param_2;
  *(undefined1 *)CONCAT62(uVar7,CONCAT11(cVar6,bVar5)) =
       *(undefined1 *)CONCAT62(uVar7,CONCAT11(cVar6,bVar5));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

