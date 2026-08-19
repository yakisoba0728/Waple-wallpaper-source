// Function: FUN_14033eb40
// Addr: 14033eb40
// Size: 52 bytes


void FUN_14033eb40(undefined8 param_1,char param_2,uint param_3,short *param_4,uint *param_5,
                  uint *param_6)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  bVar1 = true;
  uVar10 = *param_5;
  uVar9 = *param_6;
  do {
    if (param_3 < 2) {
      *param_5 = uVar10;
      *param_6 = uVar9;
      return;
    }
    if ((bVar1) || (param_2 != '\0')) {
      uVar11 = (uint)param_4[1];
      bVar5 = false;
      uVar12 = (int)*param_4 - uVar11;
      puVar6 = param_6;
      uVar7 = uVar9;
    }
    else {
      uVar11 = (uint)*param_4;
      bVar5 = true;
      uVar12 = (int)param_4[1] - uVar11;
      puVar6 = param_5;
      uVar7 = uVar10;
    }
    bVar1 = false;
    puVar6 = puVar6 + 1;
    if (uVar7 != 0) {
      while ((int)*puVar6 <= (int)uVar11) {
        if (uVar11 == *puVar6) {
          if ((int)uVar12 < 0) {
            if ((int)uVar12 < (int)puVar6[1]) {
              puVar6[1] = uVar12;
            }
          }
          else if ((int)puVar6[1] < (int)uVar12) {
            puVar6[1] = uVar12;
          }
          goto code_r0x00014033ec2c;
        }
        puVar6 = puVar6 + 8;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto UNWIND_INFO_14033ec1a;
      }
      do {
        uVar8 = (ulonglong)uVar7;
        uVar7 = uVar7 - 1;
        uVar2 = *(undefined8 *)(puVar6 + (ulonglong)uVar7 * 8 + 2);
        uVar3 = *(undefined8 *)(puVar6 + (ulonglong)uVar7 * 8 + 4);
        uVar4 = *(undefined8 *)(puVar6 + (ulonglong)uVar7 * 8 + 4 + 2);
        *(undefined8 *)(puVar6 + uVar8 * 8) = *(undefined8 *)(puVar6 + (ulonglong)uVar7 * 8);
        *(undefined8 *)(puVar6 + uVar8 * 8 + 2) = uVar2;
        *(undefined8 *)(puVar6 + uVar8 * 8 + 4) = uVar3;
        *(undefined8 *)(puVar6 + uVar8 * 8 + 4 + 2) = uVar4;
      } while (uVar7 != 0);
    }
UNWIND_INFO_14033ec1a:
    *puVar6 = uVar11;
    puVar6[1] = uVar12;
    if (bVar5) {
      uVar10 = uVar10 + 1;
    }
    else {
      uVar9 = uVar9 + 1;
    }
code_r0x00014033ec2c:
    param_4 = param_4 + 2;
    param_3 = param_3 - 2;
  } while( true );
}

