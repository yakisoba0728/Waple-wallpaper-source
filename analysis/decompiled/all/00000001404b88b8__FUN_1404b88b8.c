// Function: FUN_1404b88b8
// Addr: 1404b88b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b88b8(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  byte bVar9;
  undefined8 in_RAX;
  char *pcVar8;
  undefined4 uVar10;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  longlong in_FS_OFFSET;
  
  cVar6 = cRama4001e53c1001e53;
  uVar10 = (undefined4)((ulonglong)param_1 >> 0x20);
  pcVar8 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cRama4001e53c1001e53);
  LOCK();
  uVar2 = *(undefined4 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = (int)param_1;
  UNLOCK();
  *(uint *)(unaff_RSI + (longlong)pcVar8) =
       *(uint *)(unaff_RSI + (longlong)pcVar8) & (uint)unaff_RDI;
  (&stack0x00000000)[(longlong)unaff_RSI * 2] =
       (&stack0x00000000)[(longlong)unaff_RSI * 2] + unaff_BH;
  pcVar8[unaff_RBP * 2] = pcVar8[unaff_RBP * 2] ^ (byte)((ulonglong)param_2 >> 8);
  *pcVar8 = *pcVar8 + cVar6;
  iVar5 = *(int *)(pcVar8 + in_FS_OFFSET);
  puVar1 = (undefined4 *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x1e);
  *puVar1 = *puVar1;
  piVar4 = (int *)(unaff_RSI + 1);
  *unaff_RDI = *unaff_RSI;
  LOCK();
  iVar3 = *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(undefined4 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = uVar2;
  UNLOCK();
  *piVar4 = *piVar4 + (int)unaff_RBP;
  uVar7 = iVar5 * 0x1e53a0 + 0x782e00;
  bVar9 = (byte)(uVar7 >> 8);
  *(byte *)CONCAT44(uVar10,iVar3) = *(char *)CONCAT44(uVar10,iVar3) + bVar9;
  *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + (char)uVar7;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + iVar3;
  *(char *)piVar4 = (char)*piVar4 + (char)uVar7;
  *(byte *)CONCAT44(uVar10,iVar3) = *(byte *)CONCAT44(uVar10,iVar3) ^ bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

