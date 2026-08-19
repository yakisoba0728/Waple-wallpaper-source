// Function: FUN_1404b21dc
// Addr: 1404b21dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b21f9) overlaps instruction at (ram,0x0001404b21f8)
    */

void FUN_1404b21dc(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  char cVar5;
  undefined8 in_RAX;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EBP;
  char *unaff_RSI;
  longlong in_FS_OFFSET;
  char in_CF;
  byte unaff_retaddr;
  byte *pbVar4;
  
  unaff_RSI[0x16] = unaff_RSI[0x16] + unaff_BH + in_CF;
  cVar1 = *unaff_RSI;
  cVar5 = (char)((ulonglong)in_RAX >> 8);
  *unaff_RSI = *unaff_RSI + cVar5;
  if (*unaff_RSI != '\0' && SCARRY1(cVar1,cVar5) == *unaff_RSI < '\0') {
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & (byte)param_1;
    *(uint *)(param_2 + param_1) = *(uint *)(param_2 + param_1) & unaff_EBP;
    uVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + unaff_BH) + 0x18742000 +
            (uint)CARRY1(unaff_retaddr,(byte)((ulonglong)param_1 >> 8));
    pbVar4 = (byte *)(ulonglong)uVar3;
    bVar2 = *pbVar4;
    *pbVar4 = *pbVar4 + unaff_BL;
    *(uint *)(pbVar4 + in_FS_OFFSET) =
         (*(int *)(pbVar4 + in_FS_OFFSET) - uVar3) - (uint)CARRY1(bVar2,unaff_BL);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

