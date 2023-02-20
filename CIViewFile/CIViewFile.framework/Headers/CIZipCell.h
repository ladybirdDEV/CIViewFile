//
//  CIZipCell.h
//  CIViewFile
//
//  Created by Adam on 2020/4/17.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, ZipFileType) {
    DOC,
    PPT,
    XLSX,
    PDF,
    ZIP,
    TXT,
    UNKNOW,
};

NS_ASSUME_NONNULL_BEGIN

@interface CIZipCell : UITableViewCell

@property (nonatomic,strong) UIImageView * iconImageView;

@property (nonatomic,strong) UILabel * titleLabel;

@property (nonatomic,strong) UILabel * sizeLabel;

-(instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier name:(NSString *)name;


@end

NS_ASSUME_NONNULL_END
