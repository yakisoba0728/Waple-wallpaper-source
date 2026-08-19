// Function: FUN_1404abb64
// Addr: 1404abb64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404abb74) overlaps instruction at (ram,0x0001404abb73)
    */

void FUN_1404abb64(byte *param_1,longlong param_2)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  undefined8 in_RAX;
  byte bVar5;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RDI;
  uint *puVar4;
  
  puVar4 = (uint *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                            CONCAT11((byte)((ulonglong)param_2 >> 8) | *(byte *)(param_2 + 6),
                                     (char)param_2));
  *param_1 = *param_1 ^ (byte)in_RAX;
  *puVar4 = *puVar4 | (uint)in_RAX;
  bVar1 = *param_1;
  bVar5 = (byte)param_1;
  *param_1 = *param_1 + bVar5;
  if (CARRY1(bVar1,bVar5)) {
    uVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX + 0x2c) + 0x6c41e00;
    puVar4 = (uint *)(ulonglong)uVar3;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)param_2;
    if (*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) == '\0') {
      puVar4 = (uint *)(ulonglong)(uVar3 | *puVar4);
    }
    *unaff_RDI = *unaff_RDI + bVar5;
    pcVar2 = (char *)CONCAT71((int7)((ulonglong)puVar4 >> 8),cRam98000f89b5000f89);
    *pcVar2 = *pcVar2 + cRam98000f89b5000f89;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 == (byte *)0x1 || *param_1 == 0) {
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

