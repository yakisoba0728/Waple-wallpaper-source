// Function: FUN_1404b80fc
// Addr: 1404b80fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b8132) overlaps instruction at (ram,0x0001404b8131)
    */

void FUN_1404b80fc(undefined8 param_1,byte param_2,char *param_3)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint *in_RAX;
  char cVar7;
  char cVar8;
  undefined6 uVar9;
  char unaff_BL;
  undefined7 unaff_00000019;
  bool bVar10;
  
  uVar9 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar7 = (char)param_1;
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar6 = *in_RAX;
  bVar4 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar4;
  cVar8 = (char)((ulonglong)param_1 >> 8) + '\x1d' + CARRY1((byte)uVar6,bVar4);
  pcVar1 = (char *)(CONCAT62(uVar9,CONCAT11(cVar8,cVar7)) + 0x34001dd5);
  *pcVar1 = *pcVar1 + unaff_BL;
  out(0x49,bVar4);
  bVar2 = *(byte *)CONCAT62(uVar9,CONCAT11(cVar8,cVar7));
  *(byte *)CONCAT62(uVar9,CONCAT11(cVar8,cVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(cVar8,cVar7)) + bVar4;
  *param_3 = *param_3 + (char)param_3 + CARRY1(bVar2,bVar4);
  uVar6 = (uint)in_RAX + *in_RAX;
  cVar5 = (char)uVar6;
  bVar10 = CARRY1(*(byte *)CONCAT71(unaff_00000019,unaff_BL),param_2);
  cRam0000000146c39b23 = cVar5;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + param_2;
  cVar3 = cVar5 + *(char *)(ulonglong)uVar6;
  if (SCARRY1(cVar5,*(char *)(ulonglong)uVar6) != SCARRY1(cVar3,bVar10)) {
    cRam00000001464b953e = cRam00000001464b953e + cVar7;
    *(char *)CONCAT62(uVar9,CONCAT11(cVar8,cVar7)) =
         *(char *)CONCAT62(uVar9,CONCAT11(cVar8,cVar7)) +
         (char)((uint)(CONCAT31((int3)(uVar6 >> 8),cVar3 + bVar10) + 0x16340d00) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

