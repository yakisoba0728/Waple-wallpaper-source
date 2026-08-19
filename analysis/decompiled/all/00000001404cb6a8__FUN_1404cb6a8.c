// Function: FUN_1404cb6a8
// Addr: 1404cb6a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cb713) overlaps instruction at (ram,0x0001404cb712)
    */
/* WARNING: Removing unreachable block (ram,0x0001404cb6b7) */

void FUN_1404cb6a8(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  byte bVar7;
  undefined8 in_RAX;
  undefined7 uVar8;
  uint *puVar6;
  char *pcVar9;
  char *pcVar10;
  char cVar11;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint *puVar5;
  
  cVar11 = (char)((ulonglong)param_2 >> 8);
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar9 = (char *)CONCAT71(uVar8,cRam1000000021004cb5);
  if (param_1 == 1) {
    *pcVar9 = *pcVar9 + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = (int)CONCAT71(uVar8,cRam1000000021004cb5 + *pcVar9) + 0x8b0006f4;
  puVar6 = (uint *)(ulonglong)uVar4;
  pcVar9 = (char *)(param_1 + -2);
  cVar3 = (char)((ulonglong)pcVar9 >> 8);
  if (pcVar9 == (char *)0x0 || uVar4 != 0) {
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x7ffcc1f);
    *pcVar1 = *pcVar1 + cVar3;
    pcVar10 = (char *)CONCAT62((int6)((ulonglong)pcVar9 >> 0x10),CONCAT11(0x4c,(char)pcVar9));
    *pcVar10 = *pcVar10 + (char)(uVar4 >> 8);
    *(char *)puVar6 = (char)*puVar6 + (char)uVar4;
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x54ffcc1f);
    *pcVar1 = *pcVar1 + (char)pcVar9;
    pcVar9 = pcVar10 + -1;
    if (pcVar9 != (char *)0x0 && *pcVar1 == '\0') {
code_r0x0001404cb736:
      *param_4 = *param_4 + unaff_BL;
      *param_2 = *param_2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    uVar4 = uVar4 ^ *puVar6;
    puVar6 = (uint *)(ulonglong)uVar4;
    if ((int)uVar4 < 0) {
      uVar2 = *puVar6;
      puVar6 = (uint *)((ulonglong)(uVar4 ^ uVar2) ^ 0xe6);
      *param_4 = *param_4;
      *(char *)puVar6 = (char)*puVar6 + (char)puVar6;
      *(char *)((longlong)puVar6 + -0x23) =
           *(char *)((longlong)puVar6 + -0x23) + (char)((uVar4 ^ uVar2) >> 8);
      uVar4 = (uint)puVar6 ^ *puVar6;
      if ((int)uVar4 < 0) goto code_r0x0001404cb736;
      bVar7 = (char)(uVar4 >> 8) + cVar3;
      goto code_r0x0001404cb715;
    }
  }
  cVar3 = (char)puVar6 + unaff_BH;
  puVar5 = (uint *)CONCAT71((int7)((ulonglong)puVar6 >> 8),cVar3);
  pcVar9 = (char *)CONCAT62((int6)((ulonglong)pcVar9 >> 0x10),CONCAT11(0x4c,(char)pcVar9));
  *pcVar9 = *pcVar9 + (char)((ulonglong)puVar6 >> 8);
  *(char *)puVar5 = (char)*puVar5 + cVar3;
  *(char *)((longlong)puVar5 + -0x1f) = *(char *)((longlong)puVar5 + -0x1f) + cVar11;
  uVar4 = (uint)puVar5 ^ *puVar5;
  bVar7 = (byte)(uVar4 >> 8) ^ (byte)((uint)*(undefined4 *)(ulonglong)uVar4 >> 8);
  in((short)param_2);
code_r0x0001404cb715:
  pcVar9 = (char *)CONCAT62((int6)((ulonglong)pcVar9 >> 0x10),CONCAT11(0x4c,(char)pcVar9));
  *pcVar9 = *pcVar9 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

