#include "QtWidgetsApplication1.h"
#include <QtWidgets/QApplication>

/** @brief ftp�ϴ�������ԭʼ�������֡*/
class ocsRawData {
public:
    typedef std::shared_ptr<ocsRawData> Ptr;
    float Stagger;            /**< @brief ����ֵ*/
    float Height;             /**< @brief ����*/
    float Pressure_sub[4];    /**< @brief ѹ������*/
    float Pressure;           /**< @brief ѹ����*/
    float Yingli[6];          /**< @brief Ӧ��*/
    float HardPoint_JYZ[3];   /**< @brief ֧��Ӳ�����*/
    float HardPoint_Left[3];  /**< @brief ��ͷӲ�����*/
    float HardPoint_Right[3]; /**< @brief �ҹ�ͷӲ�����*/
    float Temprature_Max;     /**< @brief �����¶����ֵ*/
    float Temprature_Min;     /**< @brief �����¶����ֵ*/
    float HorizontalSpace;    /**< @brief ˮƽ���*/
    float VerticalSpace;      /**< @brief ��ֱ�߲�*/
    float HeightRate;         /**< @brief ���߱仯��*/
    float Rhrate;             /**< @brief ȼ����*/
    uint64_t Rhtime;          /**< @brief ȼ��ʱ��*/
    float RhPower;            /**< @brief ȼ��ǿ��*/
    float Mh;                 /**< @brief ĥ��*/
    float iSpeed;             /**< @brief �ٶ�*/
    int Rhindex;              /**< @brief ȼ������*/
    bool bPolesign;           /**< @brief ʵ�ⶨλ��*/
    uint64_t uMileage;        /**< @brief ���(��λ����)*/
    uint64_t uKmsign;         /**< @brief �����*/
    uint64_t uTime;           /**< @brief  unixʱ��*/
    uint16_t uDistanceinSpan; /**< @brief ����λ��*/
    int poleid;               /**< @brief �˺�id*/
    int detectid;             /**< @brief ���id*/
    bool way;                 /**< @brief �б� true-���� false-����*/
    ocsRawData() {
        memset(this, 0, sizeof(ocsRawData));
    }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtWidgetsApplication1 w;
    w.show();
    return a.exec();
}
