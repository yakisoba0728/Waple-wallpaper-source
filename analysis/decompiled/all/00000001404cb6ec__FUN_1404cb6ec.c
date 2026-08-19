// Function: FUN_1404cb6ec
// Addr: 1404cb6ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cb713) overlaps instruction at (ram,0x0001404cb712)
    */

void FUN_1404cb6ec(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  undefined3 uVar2;
  char cVar3;
  uint uVar4;
  char cVar7;
  byte bVar8;
  uint *in_RAX;
  uint *puVar6;
  char *pcVar9;
  char *pcVar10;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint *unaff_RDI;
  char *pcVar5;
  
  uVar4 = (uint)in_RAX ^ *in_RAX;
  *unaff_RDI = uVar4;
  pcVar9 = (char *)(param_1 + -1);
  if (pcVar9 == (char *)0x0 || uVar4 != 0) {
    uVar2 = (undefined3)(uVar4 >> 8);
    cVar3 = (char)uVar4 + unaff_BH;
    pcVar5 = (char *)(ulonglong)CONCAT31(uVar2,cVar3);
    pcVar10 = (char *)CONCAT62((int6)((ulonglong)pcVar9 >> 0x10),CONCAT11(0x4c,(char)pcVar9));
    cVar7 = (char)(uVar4 >> 8);
    *pcVar10 = *pcVar10 + cVar7;
    *pcVar5 = *pcVar5 + cVar3;
    pcVar5 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x54ffcc1f);
    *pcVar5 = *pcVar5 + (char)pcVar9;
    pcVar10 = pcVar10 + -1;
    if (pcVar10 != (char *)0x0 && *pcVar5 == '\0') {
code_r0x0001404cb736:
      *param_4 = *param_4 + unaff_BL;
      *param_2 = *param_2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar4 = CONCAT31(uVar2,cVar3 + unaff_BH);
    puVar6 = (uint *)(ulonglong)uVar4;
    pcVar9 = (char *)CONCAT62((int6)((ulonglong)pcVar10 >> 0x10),CONCAT11(0x4c,(char)pcVar10));
    *pcVar9 = *pcVar9 + cVar7;
    *(char *)puVar6 = (char)*puVar6 + cVar3 + unaff_BH;
    *(char *)((longlong)puVar6 + -0x1f) =
         *(char *)((longlong)puVar6 + -0x1f) + (char)((ulonglong)param_2 >> 8);
    uVar4 = uVar4 ^ *puVar6;
    bVar8 = (byte)(uVar4 >> 8) ^ (byte)((uint)*(undefined4 *)(ulonglong)uVar4 >> 8);
    in((short)param_2);
  }
  else {
    uVar1 = *(uint *)(ulonglong)uVar4;
    puVar6 = (uint *)((ulonglong)(uVar4 ^ uVar1) ^ 0xe6);
    *param_4 = *param_4 + (char)param_1;
    *(char *)puVar6 = (char)*puVar6 + (char)puVar6;
    *(char *)((longlong)puVar6 + -0x23) =
         *(char *)((longlong)puVar6 + -0x23) + (char)((uVar4 ^ uVar1) >> 8);
    uVar4 = (uint)puVar6 ^ *puVar6;
    if ((int)uVar4 < 0) goto code_r0x0001404cb736;
    bVar8 = (char)(uVar4 >> 8) + (char)((ulonglong)pcVar9 >> 8);
  }
  pcVar9 = (char *)CONCAT62((int6)((ulonglong)pcVar9 >> 0x10),CONCAT11(0x4c,(char)pcVar9));
  *pcVar9 = *pcVar9 + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

