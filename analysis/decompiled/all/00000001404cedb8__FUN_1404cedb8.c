// Function: FUN_1404cedb8
// Addr: 1404cedb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404cee15) */

void FUN_1404cedb8(undefined8 param_1,undefined8 param_2,char param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined8 in_RAX;
  byte bVar3;
  undefined7 uVar4;
  undefined1 uVar5;
  undefined6 uVar6;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RDI;
  char unaff_R12B;
  
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar5 = (undefined1)param_2;
  uVar4 = (undefined7)((ulonglong)param_1 >> 8);
  bVar3 = (byte)param_1;
  *unaff_RDI = *unaff_RDI + bVar3;
  *unaff_RDI = *unaff_RDI + bVar3;
  bVar3 = bVar3 ^ *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  uVar2 = in(CONCAT11(0x2b,uVar5));
  pcVar1 = (char *)(CONCAT71(CONCAT61((int6)((ulonglong)in_RAX >> 0x10),
                                      (char)((ulonglong)in_RAX >> 8) + unaff_BH),uVar2) + 1);
  *pcVar1 = *pcVar1 + unaff_R12B;
  in(CONCAT11(0x2b,uVar5));
  *(char *)CONCAT62(uVar6,CONCAT11(0x2b,uVar5)) =
       *(char *)CONCAT62(uVar6,CONCAT11(0x2b,uVar5)) + param_3;
  *(char *)CONCAT71(uVar4,bVar3) = *(char *)CONCAT71(uVar4,bVar3) + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

